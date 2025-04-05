# Step 0: Import necessary libraries
import pytest
import time

import requests
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import undetected_chromedriver as uc
from selenium.webdriver.common.action_chains import ActionChains


# Step 1: Setup a browser instance using a fixture
@pytest.fixture(scope="function")
def driver():
    driver = uc.Chrome()  # Launch an undetectable Chrome browser
    driver.maximize_window()  # Maximize window for better visibility

    yield driver  # Provide the browser to the test function

    # Step 1.1: Close the browser safely after the test
    if driver.service.process and driver.service.process.poll() is None:
        try:
            driver.quit()
        except OSError:
            pass


def test_open_university_exam_schedule(driver):
    # Step 2: Open Google homepage
    driver.get("https://google.com")

    # Step 3: Verify Google has loaded correctly
    assert "Google" in driver.title, "Google homepage not loaded correctly"


    # Step 4: Wait for the search input box
    search_input = WebDriverWait(driver, 25).until(
        EC.presence_of_element_located((By.CLASS_NAME, "gLFyf"))
    )
    assert search_input is not None, "Search input not found on Google homepage"

    # Step 5: Type the university name into Google and press Enter
    search_input.clear()
    search_input.send_keys("dai hoc mo hcm" + Keys.ENTER)

    # Step 6: Wait for results to load (basic delay)
    time.sleep(1)

    # Step 7: Find and click the official university link in the search results
    images_tab = driver.find_element(By.LINK_TEXT, "Hình ảnh")
    images_tab.click()

    # 6. Lấy tất cả các ảnh từ kết quả
    image_elements = driver.find_elements(By.XPATH, "//img[contains(@class, 'Q4LuWd')]")

    if len(image_elements) >= 4:
        # 7. Click vào ảnh thứ 4
        image_elements[3].click()

        # 8. Chờ hình ảnh lớn tải xong
        time.sleep(3)

        # 9. Lấy URL của ảnh lớn
        large_image_url = driver.find_element(By.XPATH, "//img[@class='n3VNCb']").get_attribute("src")
        print("URL của ảnh lớn:", large_image_url)

        # 10. Tải ảnh về máy
        img_data = requests.get(large_image_url).content
        with open("image_downloaded.jpg", "wb") as file:
            file.write(img_data)
        print("Ảnh đã được tải về thành công!")

    else:
        print("Không đủ ảnh để tải.")

