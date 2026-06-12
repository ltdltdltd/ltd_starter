#!/usr/bin/env python3
"""
A simple Hello World demo.
"""

def greet(name: str = "World") -> str:
    """Return a greeting message."""
    return f"Hello, {name}! 👋"


def main():
    # Basic Hello World
    print("Hello, World! 🌍")

    # With a custom name
    print(greet("Hermes"))

    # Loop demo
    names = ["Alice", "Bob", "Charlie"]
    for name in names:
        print(greet(name))


if __name__ == "__main__":
    main()
