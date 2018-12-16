void secret(char* data){
	while (*data) {
		if (*data >= 'a'&&*data < 'z'){
			*data += 1;
		}
		else if (*data == 'z') {
			*data = 'a';
		}
		data++;
	}
}
void desecret(char data[]) {
	int i = 0;
	while (data[i]) {
		if (data[i] > 'a'&&data[i] <= 'z') {
			data[i] -= 1;
		}
		else if (data[i] == 'a') {
			data[i] = 'z';
		}
		i++;
	}

}