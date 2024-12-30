<?php

$conn = new mysqli("localhost", "root", "", "test_db");
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

$id = 1; // The ID of the record to update
$newEmail = "updated.email@example.com";
$sql = "UPDATE users SET email = '$newEmail' WHERE id = $id";

if ($conn->query($sql) === TRUE) {
    echo "Record updated successfully";
} else {
    echo "Error updating record: " . $conn->error;
}

$conn->close();
?>