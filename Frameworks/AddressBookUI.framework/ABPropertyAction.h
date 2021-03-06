/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyAction : ABContactAction {
    NSArray *_propertyItems;
}

@property (nonatomic, readonly) BOOL canPerformAction;
@property (nonatomic) <ABPropertyActionDelegate> *delegate;
@property (nonatomic, copy) NSArray *propertyItems;

+ (void)performDefaultActionForItem:(id)arg1 sender:(id)arg2;

- (BOOL)canPerformAction;
- (void)dealloc;
- (id)initWithContact:(id)arg1 propertyItem:(id)arg2;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (id)propertyItems;
- (void)setPropertyItems:(id)arg1;

@end
