from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

# Setup ChromeDriver service
service = Service(executable_path="chromedriver.exe")
driver = webdriver.Chrome(service=service)

# Open Cookie Clicker website and maximize the browser window
driver.get("https://orteil.dashnet.org/cookieclicker/")
driver.maximize_window()

# Define IDs and prefixes for key elements
cookie_id = "bigCookie"  # The main cookie to click
cookies_id = "cookies"  # The element showing the number of cookies
product_price_prefix = "productPrice"  # Prefix to access prices of upgrades
product_prefix = "product"  # Prefix to access upgrade elements

# Wait for the language selection to appear and click "English"
WebDriverWait(driver, 50).until(
    EC.presence_of_element_located((By.XPATH, "//*[contains(text(), 'English')]"))
)
language = driver.find_element(By.XPATH, "//*[contains(text(), 'English')]")
language.click()

# Wait for the big cookie element to load after language selection
WebDriverWait(driver, 70).until(
    EC.presence_of_element_located((By.ID, cookie_id))
)
cookie = driver.find_element(By.ID, cookie_id)

# Infinite loop to automatically click the cookie and buy upgrades
while True:
    cookie.click()  # Click the big cookie

    # Get current number of cookies from text and convert to integer
    cookies_count = driver.find_element(By.ID, cookies_id).text.split(" ")[0]
    cookies_count = int(cookies_count.replace(",", ""))

    # Check the first 4 upgrades and buy if affordable
    for i in range(4):
        product_price = driver.find_element(By.ID, product_price_prefix + str(i)).text.replace(",", "")

        if not product_price.isdigit():
            continue  # Skip if price is not a number (e.g., empty or unavailable)

        product_price = int(product_price)

        # If enough cookies, buy the product
        if cookies_count >= product_price:
            product = driver.find_element(By.ID, product_prefix + str(i))
            product.click()
            break  # Break after buying one upgrade to recheck cookies
