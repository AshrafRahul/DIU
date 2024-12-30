<?php

$conn = new mysqli("localhost", "root", "", "test_db");
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$name = "John Doe";
$email = "john.doe@example.com";
$age = 25;
$sql = "INSERT INTO users (name, email, age) VALUES ('$name', '$email', $age)";

if ($conn->query($sql) === TRUE) {
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>