/* Generated by RuntimeBrowser.
 */

@protocol PSYProgressObserverDelegate <NSObject>

@required

- (void)progressObserver:(PSYProgressObserver *)arg1 didFinishActivity:(NSString *)arg2 withError:(NSError *)arg3;
- (void)progressObserverDidChangeProgress:(PSYProgressObserver *)arg1;
- (void)progressObserverDidChangeState:(PSYProgressObserver *)arg1;

@end
