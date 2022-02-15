struct msg{
    char message[500];
};

program MSG_PROG{
    version MSG_VERS{
        msg chat(msg)=1;
    }=1;
}=0x23451111;