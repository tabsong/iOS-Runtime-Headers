/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
    SSVURLDataConsumer *_dataConsumer;
    NSURL *_destinationFileURL;
    SSURLRequestProperties *_requestProperties;
    BOOL _runsInProcess;
    BOOL _sendsResponseForHTTPFailures;
    BOOL _shouldMescalSign;
}

@property (readonly) NSURLRequest *URLRequest;
@property (copy) SSAuthenticationContext *authenticationContext;
@property (retain) SSVURLDataConsumer *dataConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSURLConnectionRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy) NSURL *destinationFileURL;
@property (readonly) unsigned int hash;
@property (readonly) SSURLRequestProperties *requestProperties;
@property BOOL runsInProcess;
@property BOOL sendsResponseForHTTPFailures;
@property BOOL shouldMescalSign;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)URLRequest;
- (BOOL)_canRunInProcess;
- (id)authenticationContext;
- (id)copyXPCEncoding;
- (id)dataConsumer;
- (void)dealloc;
- (id)destinationFileURL;
- (id)init;
- (id)initWithRequestProperties:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)requestProperties;
- (BOOL)runsInProcess;
- (BOOL)sendsResponseForHTTPFailures;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDataConsumer:(id)arg1;
- (void)setDestinationFileURL:(id)arg1;
- (void)setRunsInProcess:(BOOL)arg1;
- (void)setSendsResponseForHTTPFailures:(BOOL)arg1;
- (void)setShouldMescalSign:(BOOL)arg1;
- (BOOL)shouldMescalSign;
- (BOOL)start;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithConnectionResponseBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

+ (id)newRadioRequestWithRequestProperties:(id)arg1;

@end
