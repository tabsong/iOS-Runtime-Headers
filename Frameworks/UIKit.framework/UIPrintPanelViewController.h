/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner> {
    BOOL _animated;
    BOOL _dismissed;
    UINavigationController *_navigationController;
    UIPrintInfo *_observedPrintInfo;
    BOOL _observingRotation;
    UIViewController *_parentController;
    UIPopoverController *_poverController;
    UIPrintInteractionController *_printInteractionController;
    PKPrinter *_printer;
    UIPrintPanelTableViewController *_tableViewController;
    UIWindow *_window;
}

@property (nonatomic) int copies;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL duplex;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int pageCount;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } pageRange;
@property (nonatomic, retain) UIPrintPaper *paper;
@property (nonatomic, readonly) NSArray *paperList;
@property (nonatomic, retain) PKPrinter *printer;
@property (nonatomic, readonly) BOOL showCopies;
@property (nonatomic, readonly) BOOL showDuplex;
@property (nonatomic, readonly) BOOL showPageRange;
@property (nonatomic, readonly) BOOL showPaper;
@property (nonatomic, readonly) BOOL showPaperSelection;
@property (nonatomic, readonly) BOOL showPrinterWarning;
@property (readonly) Class superclass;

- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentInParentAnimated:(BOOL)arg1;
- (void)_presentWindow;
- (id)_removeRollsFrom:(id)arg1;
- (void)cancelPrinting;
- (int)copies;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismissPrintPanel:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)duplex;
- (BOOL)filtersPrinters;
- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)pageCount;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pageRange;
- (id)paper;
- (id)paperList;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPrintPanelAnimated:(BOOL)arg1;
- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentPrintPanelFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)printPanelDidDisappear;
- (void)printPaperViewDidDisappear;
- (void)printRangeViewDidDisappear;
- (id)printer;
- (void)printerBrowserViewDidDisappear;
- (void)setCopies:(int)arg1;
- (void)setDuplex:(BOOL)arg1;
- (void)setPageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setPaper:(id)arg1;
- (void)setPrinter:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showCopies;
- (BOOL)showDuplex;
- (BOOL)showPageRange;
- (BOOL)showPaper;
- (BOOL)showPaperSelection;
- (BOOL)showPrinterWarning;
- (void)startPrinting;
- (unsigned int)supportedInterfaceOrientations;

@end
