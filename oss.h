
#define FTOK_PATH "/"
#define QFKEY 356423
#define MFKEY 141343
#define MAX_NANOS 1000000000

struct sh_memory {
	int seconds, nanoseconds;
	int shmPID;
};


enum q_mtype { QANY=0, QLOCK, QUNLOCK };

struct msgbuf {
	long mtype;
	pid_t pid;
};
#define MG_LEN sizeof(pid_t)
