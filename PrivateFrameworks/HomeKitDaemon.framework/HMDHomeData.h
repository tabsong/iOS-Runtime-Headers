/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeData : NSObject {
    NSArray *_accessories;
    NSArray *_homes;
    NSUUID *_primaryHomeUUID;
    NSArray *_uuidsOfRemovedHomes;
}

@property (nonatomic, readonly, copy) NSArray *accessories;
@property (nonatomic, readonly, copy) NSArray *homes;
@property (nonatomic, readonly, copy) NSUUID *primaryHomeUUID;
@property (nonatomic, readonly, copy) NSArray *uuidsOfRemovedHomes;

- (void).cxx_destruct;
- (id)accessories;
- (id)homes;
- (id)initWithHomes:(id)arg1 accessories:(id)arg2 primaryHomeUUID:(id)arg3 uuidsOfRemovedHomes:(id)arg4;
- (id)primaryHomeUUID;
- (id)uuidsOfRemovedHomes;

@end
