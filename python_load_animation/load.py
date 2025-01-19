import itertools
import threading
import time
import os

# This was a kind of test to see that somthing I wanted to try would work ie. using mutli-threading for a smooth exit


class LoadingAnimation:
    def __init__(self, message="Loading", animation_type="dots"):
        self.message = message
        self.animation_type = animation_type
        self.running = False
        self.thread = None

    def _dots_animation(self):
        for frame in itertools.cycle(['.', '..', '...', '']):
            if not self.running:
                break
            print(f"\r{self.message}{frame} ", end="", flush=True)
            time.sleep(0.5)

    def _spinner_animation(self):
        for frame in itertools.cycle(['|', '/', '-', '\\']):
            if not self.running:
                break
            print(f"\r{self.message} {frame} ", end="", flush=True)
            time.sleep(0.2)

    def start(self):
        if not os.isatty(0):
            raise EnvironmentError("This script is designed to run in a terminal.")
        self.running = True
        if self.animation_type == "dots":
            self.thread = threading.Thread(target=self._dots_animation)
        elif self.animation_type == "spinner":
            self.thread = threading.Thread(target=self._spinner_animation)
        else:
            raise ValueError("Invalid animation_type. Choose 'dots' or 'spinner'.")
        self.thread.start()

    def stop(self):
        self.running = False
        if self.thread is not None:
            self.thread.join()
        print("\r" + " " * (len(self.message) + 10) + "\r", end="", flush=True)  # Clear the line

if __name__ == "__main__":
    animation = LoadingAnimation(message="Processing", animation_type="dots")
    try:
        animation.start()
        time.sleep(5)  # Simulate some work
    finally:
        animation.stop()
    print("Done!")
