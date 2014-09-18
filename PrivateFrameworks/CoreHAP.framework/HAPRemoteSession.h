/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface HAPRemoteSession : NSObject {
    unsigned char _cipherReadKey[32];
    unsigned char _cipherReadNonce[8];
    unsigned char _cipherWriteKey[32];
    unsigned char _cipherWriteNonce[8];
    id _findPeerHandler;
    NSObject<OS_dispatch_source> *_idleTimer;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id _internalRequestHandler;
    const char *_label;
    unsigned char _pairVerifyDone;
    struct PairingSessionPrivate { } *_pairVerifySession;
    NSMutableDictionary *_prepareRequests;
    id _requestHandler;
    NSString *_sessionID;
    int _state;
    id _stoppedHandler;
    NSMutableDictionary *_transactions;
    id _transportSendMessage;
    long long _type;
    NSObject<OS_dispatch_queue> *_userQueue;
    NSMutableArray *_userTransactions;
    bool_commitResponded;
    bool_prepareResponded;
    bool_started;
}

@property(retain) NSObject<OS_dispatch_queue> * dispatchQueue;
@property(copy) id findPeerHandler;
@property(copy) id internalRequestHandler;
@property(copy) id requestHandler;
@property(copy) id stoppedHandler;
@property(copy) id transportSendMessage;

- (void).cxx_destruct;
- (int)_clientHandleCommitResponse:(id)arg1;
- (int)_clientHandlePrepareResponse:(id)arg1;
- (int)_clientPairVerifyExchange:(id)arg1;
- (void)_clientRunStateMachine;
- (int)_clientSendCommitRequest:(id)arg1;
- (int)_clientSendPrepareRequest:(id)arg1;
- (void)_completeTransaction:(id)arg1 response:(id)arg2 status:(int)arg3;
- (void)_completeUserTransaction:(id)arg1 response:(id)arg2 status:(int)arg3;
- (void)_runStateMachine;
- (void)_sendRequest:(id)arg1 options:(id)arg2 responseHandler:(id)arg3;
- (void)_sendUserRequest:(id)arg1 options:(id)arg2 responseHandler:(id)arg3;
- (void)_serverCompletePrepareRequest:(id)arg1;
- (int)_serverHandleCommitRequest:(id)arg1 responseHandler:(id)arg2;
- (int)_serverHandleDecryptedRequest:(id)arg1 responseHandler:(id)arg2;
- (void)_serverHandleEncryptedRequest:(id)arg1;
- (int)_serverHandlePrepareRequest:(id)arg1 responseHandler:(id)arg2;
- (void)_serverPairVerifyExchange:(id)arg1;
- (void)_serverRunStateMachine;
- (int)_setupEncryption;
- (void)_start;
- (void)_stop:(int)arg1;
- (void)_transportReceivedMessage:(id)arg1;
- (int)_updateIdleTimer;
- (void)dealloc;
- (id)dispatchQueue;
- (id)findPeerHandler;
- (id)init;
- (id)initWithType:(long long)arg1;
- (id)internalRequestHandler;
- (id)requestHandler;
- (void)sendRequest:(id)arg1 options:(id)arg2 responseHandler:(id)arg3;
- (void)setDispatchQueue:(id)arg1;
- (void)setFindPeerHandler:(id)arg1;
- (void)setInternalRequestHandler:(id)arg1;
- (void)setRequestHandler:(id)arg1;
- (void)setStoppedHandler:(id)arg1;
- (void)setTransportSendMessage:(id)arg1;
- (void)start;
- (void)stop;
- (id)stoppedHandler;
- (void)transportReceivedMessage:(id)arg1;
- (id)transportSendMessage;

@end