-- MySQL dump 10.13  Distrib 8.0.21, for Win64 (x86_64)
--
-- Host: localhost    Database: proiect
-- ------------------------------------------------------
-- Server version	8.0.21

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `camera`
--

DROP TABLE IF EXISTS `camera`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `camera` (
  `idcamera` bigint unsigned NOT NULL AUTO_INCREMENT,
  `numarcamera` int DEFAULT NULL,
  `numarpaturi` int DEFAULT NULL,
  `balcon` varchar(45) DEFAULT NULL,
  `bucatarie` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idcamera`)
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `camera`
--

LOCK TABLES `camera` WRITE;
/*!40000 ALTER TABLE `camera` DISABLE KEYS */;
INSERT INTO `camera` VALUES (7,1,2,'DA','DA'),(8,27,1,'NU','DA'),(9,69,1,'DA','DA'),(10,102,2,'NU','NU'),(11,23,1,'NU','DA');
/*!40000 ALTER TABLE `camera` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cazare`
--

DROP TABLE IF EXISTS `cazare`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `cazare` (
  `idcazare` bigint NOT NULL AUTO_INCREMENT,
  `idhotel` bigint unsigned DEFAULT NULL,
  `idcamera` bigint unsigned DEFAULT NULL,
  `status` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idcazare`),
  KEY `fk_idcamera_idx` (`idcamera`),
  KEY `fk_idhotel` (`idhotel`),
  CONSTRAINT `fk_idcamera` FOREIGN KEY (`idcamera`) REFERENCES `camera` (`idcamera`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `fk_idhotel` FOREIGN KEY (`idhotel`) REFERENCES `hotel` (`idhotel`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cazare`
--

LOCK TABLES `cazare` WRITE;
/*!40000 ALTER TABLE `cazare` DISABLE KEYS */;
INSERT INTO `cazare` VALUES (8,13,7,'OCUPAT'),(9,13,7,'OCUPAT'),(10,13,7,'null');
/*!40000 ALTER TABLE `cazare` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `hotel`
--

DROP TABLE IF EXISTS `hotel`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `hotel` (
  `idhotel` bigint unsigned NOT NULL AUTO_INCREMENT,
  `nume` varchar(45) DEFAULT NULL,
  `locatie` varchar(45) DEFAULT NULL,
  `rating` int unsigned DEFAULT NULL,
  `dataconstruire` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idhotel`)
) ENGINE=InnoDB AUTO_INCREMENT=18 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `hotel`
--

LOCK TABLES `hotel` WRITE;
/*!40000 ALTER TABLE `hotel` DISABLE KEYS */;
INSERT INTO `hotel` VALUES (13,'Intercontinental','Bucuresti',4,'20-05-1971'),(14,'Hotel 1','Locatie 1',1,'01-01-2001'),(15,'Hotel 2','Locatie 2',2,'02-02-2002'),(16,'Hotel 3 ','Locatie 3',3,'03-03-2003');
/*!40000 ALTER TABLE `hotel` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-02-16  9:58:46
