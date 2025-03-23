from flask import Flask
from random import randint
from time import sleep

app = Flask(__name__)

@app.route("/")
def index():
    return "OK"

@app.route("/about")
def about():
    return "OK"

@app.route("/random")
def rndm():
    sleep(randint(0,2))
    return "OK"

if __name__ == "__main__":
    app.run()