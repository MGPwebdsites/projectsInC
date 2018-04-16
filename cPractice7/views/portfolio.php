<!--<div>
    <iframe allowfullscreen frameborder="0" height="315" src="https://www.youtube.com/embed/oHg5SJYRHA0?autoplay=1&iv_load_policy=3&rel=0" width="420"></iframe>
</div>-->

<div>
	<div id="message">
		<?php
			print("Hello, ". $cash[0]["username"] .". Your current balance is " . sprintf("%.2f",$cash[0]["cash"]).".");
		?>
	</div>
    <table id="overview">
		<?php
			print("<tr>");
				print("<th>Symbol</th>");
				print("<th>Name</th>");
				print("<th>Shares</th>");
				print("<th>Price</th>");
				print("<th>Total value</th>");
			print("</tr>");
				  
			foreach ($positions as $position)
			{	  
				print("<tr>");
				print("<td>" . $position["symbol"] . "</td>");
				print("<td>" . $position["name"] . "</td>");
				print("<td>" . $position["shares"] . "</td>");
				print("<td>" . $position["price"] . "</td>");
				print("<td>" . $position["total"] . "</td>");
				print("</tr>");
			}
		?>
	</table>
</div>
