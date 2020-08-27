
int Searial_intValueRead = -1;

void ReadSerialInputs(int argMin, int argMax) {
    while (Serial.available() == 0) {} //do nada

    int _tempInteger = Serial.parseInt();
    Serial.print("!entered  ");
    Serial.print(_tempInteger);
    Serial.println(" ;");
    if (_tempInteger > argMin && _tempInteger < argMax) {
        if (_tempInteger != Searial_intValueRead) {
            
            Searial_intValueRead = _tempInteger;
            }
        else
            Serial.println("!!!is same as old value!!!");

        }
    else {
        Serial.println("!!!!!outside of min max!!!!!");
        }


    }