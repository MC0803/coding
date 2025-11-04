window.addEventListener('scroll', function() {
      const scrollY = window.scrollY; // Get current scroll position
      console.log("Scroll Y:", scrollY); // Log to console

      // Update the message on the page
      document.getElementById('message').textContent =
        "You have scrolled: " + scrollY.toFixed(0) + "px";
    });


    // this css makes page scrollable
    
    //  <style>
    //   body {
    //     height: 2000px; /* Makes the page scrollable */
    //     margin: 0;
    //     font-family: Arial, sans-serif;
    //   }
    //   #message {
    //     position: fixed;
    //     top: 10px;
    //     left: 10px;
    //     background: yellow;
    //     padding: 10px;
    //     border: 1px solid #ccc;
    //   }
    // </style>