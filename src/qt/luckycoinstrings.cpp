#include <QtGlobal>
// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *luckycoin_strings[] = {
QT_TRANSLATE_NOOP("luckycoin-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
" %s\n"
"It is recommended you use the following random password:\n"
"rpcuser=luckycoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"Acceptable ciphers (default: TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!AH:!3DES:"
"@STRENGTH)"),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"Cannot obtain a lock on data directory %s.  Luckycoin is probably already "
"running."),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"Detach block and address databases. Increases shutdown time (default: 0)"),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"Error: The transaction was rejected.  This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds  "),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"Unable to bind to %s on this computer. Luckycoin is probably already running."),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"Warning: -paytxfee is set very high. This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"Warning: Please check that your computer's date and time are correct.  If "
"your clock is wrong Luckycoin will not work properly."),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("luckycoin-core", ""
"\n"
"SSL options: (see the Luckycoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("luckycoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("luckycoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("luckycoin-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("luckycoin-core", "An error occured while setting up the RPC port %i for listening: %s"),
QT_TRANSLATE_NOOP("luckycoin-core", "Bind to given address. Use [host]:port notation for IPv6"),
QT_TRANSLATE_NOOP("luckycoin-core", "Luckycoin version"),
QT_TRANSLATE_NOOP("luckycoin-core", "Luckycoin"),
QT_TRANSLATE_NOOP("luckycoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("luckycoin-core", "Cannot initialize keypool"),
QT_TRANSLATE_NOOP("luckycoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("luckycoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("luckycoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("luckycoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Connect through socks proxy"),
QT_TRANSLATE_NOOP("luckycoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("luckycoin-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Don't generate coins"),
QT_TRANSLATE_NOOP("luckycoin-core", "Done loading"),
QT_TRANSLATE_NOOP("luckycoin-core", "Error loading blkindex.dat"),
QT_TRANSLATE_NOOP("luckycoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("luckycoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("luckycoin-core", "Error loading wallet.dat: Wallet requires newer version of Luckycoin"),
QT_TRANSLATE_NOOP("luckycoin-core", "Error"),
QT_TRANSLATE_NOOP("luckycoin-core", "Error: Transaction creation failed  "),
QT_TRANSLATE_NOOP("luckycoin-core", "Error: Wallet locked, unable to create transaction  "),
QT_TRANSLATE_NOOP("luckycoin-core", "Error: could not start node"),
QT_TRANSLATE_NOOP("luckycoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("luckycoin-core", "Fee per KB to add to transactions you send"),
QT_TRANSLATE_NOOP("luckycoin-core", "Find peers using DNS lookup (default: 1 unless -connect)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Find peers using internet relay chat (default: 0)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Generate coins"),
QT_TRANSLATE_NOOP("luckycoin-core", "Get help for a command"),
QT_TRANSLATE_NOOP("luckycoin-core", "How many blocks to check at startup (default: 2500, 0 = all)"),
QT_TRANSLATE_NOOP("luckycoin-core", "How thorough the block verification is (0-6, default: 1)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Imports blocks from external blk000?.dat file"),
QT_TRANSLATE_NOOP("luckycoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("luckycoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("luckycoin-core", "Invalid -tor address: '%s'"),
QT_TRANSLATE_NOOP("luckycoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("luckycoin-core", "Invalid amount"),
QT_TRANSLATE_NOOP("luckycoin-core", "List commands"),
QT_TRANSLATE_NOOP("luckycoin-core", "Listen for JSON-RPC connections on <port> (default: 9332)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Listen for connections on <port> (default: 9333 or testnet: 19333)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("luckycoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("luckycoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("luckycoin-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 5000)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 1000)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Only connect to nodes in network <net> (IPv4, IPv6 or Tor)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Options:"),
QT_TRANSLATE_NOOP("luckycoin-core", "Output extra debugging information. Implies all other -debug* options"),
QT_TRANSLATE_NOOP("luckycoin-core", "Output extra network debugging information"),
QT_TRANSLATE_NOOP("luckycoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("luckycoin-core", "Prepend debug output with timestamp"),
QT_TRANSLATE_NOOP("luckycoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("luckycoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("luckycoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("luckycoin-core", "Select the version of socks proxy to use (4-5, default: 5)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Send command to -server or luckycoind"),
QT_TRANSLATE_NOOP("luckycoin-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("luckycoin-core", "Send trace/debug info to debugger"),
QT_TRANSLATE_NOOP("luckycoin-core", "Sending..."),
QT_TRANSLATE_NOOP("luckycoin-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Set database cache size in megabytes (default: 25)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Set database disk log size in megabytes (default: 100)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Set key pool size to <n> (default: 100)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Specify configuration file (default: luckycoin.conf)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Specify connection timeout (in milliseconds)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("luckycoin-core", "Specify pid file (default: luckycoind.pid)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("luckycoin-core", "This help message"),
QT_TRANSLATE_NOOP("luckycoin-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("luckycoin-core", "To use the %s option"),
QT_TRANSLATE_NOOP("luckycoin-core", "Unable to bind to %s on this computer (bind returned error %d, %s)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Unknown -socks proxy version requested: %i"),
QT_TRANSLATE_NOOP("luckycoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("luckycoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("luckycoin-core", "Usage:"),
QT_TRANSLATE_NOOP("luckycoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("luckycoin-core", "Use UPnP to map the listening port (default: 0)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Use proxy to reach tor hidden services (default: same as -proxy)"),
QT_TRANSLATE_NOOP("luckycoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("luckycoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("luckycoin-core", "Wallet needed to be rewritten: restart Luckycoin to complete"),
QT_TRANSLATE_NOOP("luckycoin-core", "Warning: Disk space is low"),
QT_TRANSLATE_NOOP("luckycoin-core", "Warning: this version is obsolete, upgrade required"),
};
