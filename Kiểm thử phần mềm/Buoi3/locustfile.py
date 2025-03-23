from locust import HttpUser, task

class HelloWorldUser(HttpUser):
    @task
    def hello(self):
        self.client.get("/")
        self.client.get("/about")
        self.client.get("/random")