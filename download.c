private void button2_Click(object sender, EventArgs e)
        {
            //define string varaibles contaning download link to the AT and GR files
            string fileUrlAT_350Z = "https://github.com/FrowningFrog/burnout_mods/raw/fad8fece34715f182957fb95a92f1907dd268c6d/350Z/VEH_XASC1B3_AT.BIN";
            string fileUrlGR_350Z = "https://github.com/FrowningFrog/burnout_mods/raw/fad8fece34715f182957fb95a92f1907dd268c6d/350Z/VEH_XASC1B3_GR.BIN";
            // Call the DownloadFile method to download the contents of the file at the specified URL
            byte[] fileContents_AT_350Z = DownloadFile(fileUrlAT_350Z);
            byte[] fileContents_GR_350Z = DownloadFile(fileUrlGR_350Z);
            // Initialize a string variable with the file path where the downloaded file will be saved
            string filePath_AT_350Z = @"D:\Program Files (x86)\Origin Games\BurnoutPR\VEHICLES\VEH_XASC1B3_AT.BIN";
            string filePath_GR_350Z = @"D:\Program Files (x86)\Origin Games\BurnoutPR\VEHICLES\VEH_XASC1B3_GR.BIN";
            // Use the WriteAllBytes method of the File class to write the contents of fileContents to the specified file path
            File.WriteAllBytes(filePath_AT_350Z, fileContents_AT_350Z);
            File.WriteAllBytes(filePath_GR_350Z, fileContents_GR_350Z);
        }