window.addEventListener('scroll', function() {
      const scrollY = window.scrollY; // Get current scroll position
      console.log("Scroll Y:", scrollY); // Log to console

      // Update the message on the page
      document.getElementById('message').textContent =
        "You have scrolled: " + scrollY.toFixed(0) + "px";
    });