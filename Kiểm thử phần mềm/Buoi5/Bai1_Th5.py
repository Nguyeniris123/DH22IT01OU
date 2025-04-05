# Step 0: Import necessary libraries
import pytest
import time
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
    time.sleep(5)

    # Step 7: Find and click the official university link in the search results
    uni_link = WebDriverWait(driver, 30).until(
        EC.presence_of_element_located((By.PARTIAL_LINK_TEXT, "TRƯỜNG ĐẠI HỌC MỞ TP HCM"))
    )
    assert uni_link is not None, "University link not found in search results"
    uni_link.click()

    # Step 8: Ensure that we landed on the official university site
    assert "ou.edu.vn" in driver.current_url, f"Expected university URL, but found: {driver.current_url}"

    # Step 9: Look for and click on the "LỊCH THI" (Exam Schedule) link
    exam_link = WebDriverWait(driver, 30).until(
        EC.presence_of_element_located((By.PARTIAL_LINK_TEXT, "Giới thiệu"))
    )
    assert exam_link is not None, "'Giới thiệu' link not found on the university page"
    exam_link.click()

    exam_link2 = WebDriverWait(driver, 30).until(
        EC.presence_of_element_located((By.PARTIAL_LINK_TEXT, "Tham quan Thực tế ảo"))
    )
    assert exam_link2 is not None, "'Tham quan Thực tế ảo' link not found on the university page"
    exam_link2.click()

    exam_link3 = WebDriverWait(driver, 30).until(
        EC.presence_of_element_located((By.XPATH, "//b[text()='Campus Bình Dương']"))
    )

    action = ActionChains(driver)
    action.move_to_element(exam_link3).click().perform()

    # Step 10: Wait for the exam schedule page to load
    time.sleep(10)

    # Step 11: Ensure that the "Lịch thi" text is present on the page
    WebDriverWait(driver, 30).until(
        EC.presence_of_element_located((By.XPATH, "//*[contains(text(), 'Campus Bình Dương')]"))
    )

    # Step 12: Final check – verify content is in the page source
    assert "Lịch thi" in driver.page_source or "Campus Bình Dương" in driver.page_source.lower(), "Exam schedule content not found"

