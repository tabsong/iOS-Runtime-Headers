/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextField : UIControl <ABText, MPUAutoupdatingTextContainer, NSCoding, UIKeyboardInput, UIPopoverControllerDelegate, UITextInput, UITextInputTraits_Private, _UILayoutBaselineUpdating> {
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    BOOL _avoidBecomeFirstResponder;
    UIImage *_background;
    UITextFieldBorderView *_backgroundView;
    NSLayoutConstraint *_baselineLayoutConstraint;
    _UIBaselineLayoutStrut *_baselineLayoutLabel;
    int _borderStyle;
    UIButton *_clearButton;
    int _clearButtonMode;
    struct CGSize { 
        float width; 
        float height; 
    } _clearButtonOffset;
    BOOL _deferringBecomeFirstResponder;
    id _delegate;
    UIImage *_disabledBackground;
    UITextFieldBorderView *_disabledBackgroundView;
    UITextFieldLabel *_displayLabel;
    float _fullFontSize;
    UIImageView *_iconView;
    UIView *_inputAccessoryView;
    UIView *_inputView;
    UITextInteractionAssistant *_interactionAssistant;
    UILabel *_label;
    float _labelOffset;
    UIView *_leftView;
    int _leftViewMode;
    struct CGSize { 
        float width; 
        float height; 
    } _leftViewOffset;
    float _minimumFontSize;
    UITextInputTraits *_nonAtomTraits;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _padding;
    UITextFieldLabel *_placeholderLabel;
    UITextFieldLabel *_prefixLabel;
    float _progress;
    UIView *_rightView;
    int _rightViewMode;
    struct CGSize { 
        float width; 
        float height; 
    } _rightViewOffset;
    int _scrollXOffset;
    int _scrollYOffset;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _selectionRangeWhenNotEditing;
    BOOL _setSelectionRangeAfterFieldEditorIsAttached;
    UITextFieldLabel *_suffixLabel;
    UITextFieldBackgroundView *_systemBackgroundView;
    struct { 
        unsigned int verticallyCenterText : 1; 
        unsigned int isAnimating : 4; 
        unsigned int inactiveHasDimAppearance : 1; 
        unsigned int becomesFirstResponderOnClearButtonTap : 1; 
        unsigned int clearsPlaceholderOnBeginEditing : 1; 
        unsigned int adjustsFontSizeToFitWidth : 1; 
        unsigned int fieldEditorAttached : 1; 
        unsigned int canBecomeFirstResponder : 1; 
        unsigned int shouldSuppressShouldBeginEditing : 1; 
        unsigned int inResignFirstResponder : 1; 
        unsigned int undoDisabled : 1; 
        unsigned int explicitAlignment : 1; 
        unsigned int implementsCustomDrawing : 1; 
        unsigned int needsClearing : 1; 
        unsigned int suppressContentChangedNotification : 1; 
        unsigned int allowsEditingTextAttributes : 1; 
        unsigned int usesAttributedText : 1; 
        unsigned int backgroundViewState : 2; 
        unsigned int clearingBehavior : 2; 
    } _textFieldFlags;
    _UICascadingTextStorage *_textStorage;
    UITextInputTraits *_traits;
}

@property (setter=MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:, nonatomic) BOOL MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
@property (nonatomic, readonly) MPUTextContainerContentSizeUpdater *MPU_contentSizeUpdater;
@property (setter=_setBaselineLayoutConstraint:, nonatomic, retain) NSLayoutConstraint *_baselineLayoutConstraint;
@property (setter=_setBaselineLayoutLabel:, nonatomic, retain) _UIBaselineLayoutStrut *_baselineLayoutLabel;
@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (nonatomic, copy) NSAttributedString *attributedPlaceholder;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) int autocorrectionType;
@property (nonatomic, retain) UIImage *background;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic) int borderStyle;
@property (nonatomic) int clearButtonMode;
@property (nonatomic) BOOL clearsOnBeginEditing;
@property (nonatomic) BOOL clearsOnInsertion;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *defaultTextAttributes;
@property (nonatomic) BOOL deferBecomingResponder;
@property (nonatomic) <UITextFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic, retain) UIImage *disabledBackground;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (getter=isEditing, nonatomic, readonly) BOOL editing;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) BOOL forceEnableDictation;
@property (readonly) unsigned int hash;
@property (retain) UIView *inputAccessoryView;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (retain) UIView *inputView;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned int insertionPointWidth;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic, retain) UIView *leftView;
@property (nonatomic) int leftViewMode;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic) float minimumFontSize;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) int returnKeyType;
@property (nonatomic, retain) UIView *rightView;
@property (nonatomic) int rightViewMode;
@property (getter=isSecureTextEntry, nonatomic) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) int selectionAffinity;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) int spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, copy) NSDictionary *typingAttributes;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (BOOL)_isCompatibilityTextField;
+ (BOOL)_isDisplayingShortcutViewController;

- (void)__resumeBecomeFirstResponder;
- (void)_activateSelectionView;
- (void)_addShortcut:(id)arg1;
- (void)_applicationResuming:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_atomBackgroundViewFrame;
- (id)_attributedText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_availableTextRectExcludingButtonsForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_availableTextRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forEditing:(BOOL)arg2;
- (id)_backgroundView;
- (id)_baselineLayoutConstraint;
- (float)_baselineLayoutConstraintConstantForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_baselineLayoutLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_baselineLeftViewRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_becomeFirstResponder;
- (BOOL)_canDrawContent;
- (void)_clearBackgroundViews;
- (id)_clearButton;
- (void)_clearButtonClicked:(id)arg1;
- (id)_clearButtonImageForState:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })_clearButtonSize;
- (void)_clearSelectionUI;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (void)_createBaselineLayoutLabelIfNecessary;
- (void)_createInteractionAssistant;
- (int)_currentTextAlignment;
- (void)_define:(id)arg1;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (id)_dictationInterpretations;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forLabel:(id)arg2;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)_endedEditing;
- (id)_fieldEditor;
- (BOOL)_fieldEditorAttached;
- (void)_finishResignFirstResponder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForLabel:(id)arg1 inTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)_hasContent;
- (BOOL)_hasSuffixField;
- (BOOL)_heightShouldBeMini;
- (BOOL)_implementsCustomDrawing;
- (BOOL)_inPopover;
- (void)_initialScrollDidFinish:(id)arg1;
- (id)_inputController;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_invalidateBaselineLayoutConstraints;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (BOOL)_isPasscodeStyle;
- (BOOL)_isShowingPlaceholder;
- (BOOL)_isShowingPrefix;
- (struct CGSize { float x1; float x2; })_leftViewOffset;
- (float)_marginTop;
- (float)_marginTopForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })_originForTextFieldLabel:(id)arg1;
- (BOOL)_partsShouldBeMini;
- (float)_passcodeStyleAlpha;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (id)_placeholderColor;
- (id)_placeholderLabel;
- (Class)_placeholderLabelClass;
- (id)_placeholderView;
- (void)_populateArchivedSubviews:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_prefixFrame;
- (void)_promptForReplace:(id)arg1;
- (id)_proxyTextInput;
- (BOOL)_requiresKeyboardResetOnReload;
- (void)_resetSelectionUI;
- (void)_resignFirstResponder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_responderExternalTouchRectForWindow:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (struct CGSize { float x1; float x2; })_rightViewOffset;
- (void)_sanitizeText:(id)arg1;
- (id)_scriptingInfo;
- (struct CGPoint { float x1; float x2; })_scrollOffset;
- (void)_scrollRangeToVisible:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionClipRect;
- (void)_selectionMayChange:(id)arg1;
- (void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(BOOL)arg2;
- (void)_setBackgroundFillColor:(id)arg1;
- (void)_setBackgroundStrokeColor:(id)arg1;
- (void)_setBackgroundStrokeWidth:(float)arg1;
- (void)_setBaselineLayoutConstraint:(id)arg1;
- (void)_setBaselineLayoutLabel:(id)arg1;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setLeftViewOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setNeedsStyleRecalc;
- (void)_setPasscodeStyleAlpha:(float)arg1;
- (void)_setPrefix:(id)arg1;
- (void)_setRightViewOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setSuffix:(id)arg1 withColor:(id)arg2;
- (void)_setSystemBackgroundViewActive:(BOOL)arg1;
- (void)_setUpBaselineLayoutConstraintsForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_shouldEndEditing;
- (BOOL)_shouldObscureInput;
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (void)_showTextStyleOptions:(id)arg1;
- (BOOL)_showsAtomBackground;
- (BOOL)_showsClearButton:(BOOL)arg1;
- (BOOL)_showsClearButtonWhenEmpty;
- (BOOL)_showsClearButtonWhenNonEmpty:(BOOL)arg1;
- (BOOL)_showsLeftView;
- (BOOL)_showsRightView;
- (void)_sizeChanged:(BOOL)arg1;
- (void)_stopObservingFieldEditorScroll;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_suffixFrame;
- (int)_suffixLabelTextAlignment;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_syncTypingAttributesWithDefaultAttribute:(id)arg1;
- (id)_systemBackgroundView;
- (Class)_systemBackgroundViewClass;
- (id)_text;
- (id)_textInputViewForAddingGestureRecognizers;
- (id)_textLabelView;
- (BOOL)_textNeedsSanitizing:(id)arg1;
- (struct CGSize { float x1; float x2; })_textSize;
- (struct CGSize { float x1; float x2; })_textSizeUsingFullFontSize:(BOOL)arg1;
- (void)_transliterateChinese:(id)arg1;
- (void)_updateAtomBackground;
- (void)_updateAtomTextColor;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateBackgroundViewsAnimated:(BOOL)arg1;
- (void)_updateBaselineInformationDependentOnBounds;
- (void)_updateButtons;
- (void)_updateForPasscodeAppearance;
- (void)_updateLabel;
- (void)_updatePlaceholderPosition;
- (void)_updateSuffix:(id)arg1;
- (void)_updateTextLabel;
- (BOOL)_useGesturesForEditableContent;
- (BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
- (void)_windowBecameKey;
- (id)actualFont;
- (float)actualMinimumFontSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedCaretRectForCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)adjustsFontSizeToFitWidth;
- (BOOL)allowsEditingTextAttributes;
- (int)atomStyle;
- (void)attachFieldEditor:(id)arg1;
- (id)attributedPlaceholder;
- (id)attributedText;
- (id)automaticallySelectedOverlay;
- (id)background;
- (id)backgroundColor;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (BOOL)becomeFirstResponder;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })borderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)borderStyle;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelAutoscroll;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)clearButton;
- (int)clearButtonMode;
- (struct CGSize { float x1; float x2; })clearButtonOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clearButtonRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)clearText;
- (int)clearingBehavior;
- (BOOL)clearsOnBeginEditing;
- (BOOL)clearsOnInsertion;
- (BOOL)clearsPlaceholderOnBeginEditing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)copy:(id)arg1;
- (void)createPlaceholderIfNecessary;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(int)arg2;
- (id)createTextLabelWithTextColor:(id)arg1;
- (id)customOverlayContainer;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (id)defaultTextAttributes;
- (id)delegate;
- (void)deleteBackward;
- (void)disableClearsOnInsertion;
- (id)disabledBackground;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (void)drawBorder:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawPlaceholderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawPrefixInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawSuffixInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)drawsAsAtom;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endOfDocument;
- (void)endSelectionChange;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 toCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)fieldEditorDidChange:(id)arg1;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (void)finishedSettingPlaceholder;
- (void)finishedSettingTextOrAttributedText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (BOOL)hasMarkedText;
- (BOOL)hasSelection;
- (BOOL)hasText;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })iconRect;
- (void)increaseSize:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputAccessoryView;
- (id)inputDelegate;
- (id)inputView;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isUndoEnabled;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (void)layoutSubviews;
- (void)layoutTilesNow;
- (id)leftView;
- (int)leftViewMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)metadataDictionariesForDictationResults;
- (id)methodSignatureForSelector:(SEL)arg1;
- (float)minimumFontSize;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (unsigned int)offsetInMarkedTextForSelection:(id)arg1;
- (float)paddingBottom;
- (float)paddingLeft;
- (float)paddingRight;
- (float)paddingTop;
- (void)paste:(id)arg1;
- (id)placeholder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })placeholderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)replace:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)rightView;
- (int)rightViewMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)scrollTextFieldToVisible;
- (id)searchText;
- (void)select:(id)arg1;
- (void)selectAll;
- (void)selectAll:(id)arg1;
- (void)selectAllFromFieldEditor:(id)arg1;
- (id)selectedAttributedText;
- (id)selectedText;
- (id)selectedTextRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)setAtomStyle:(int)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setAutoresizesTextToFit:(BOOL)arg1;
- (void)setBackground:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setBecomesFirstResponderOnClearButtonTap:(BOOL)arg1;
- (void)setBorderStyle:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setClearButtonMode:(int)arg1;
- (void)setClearButtonOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setClearButtonStyle:(int)arg1;
- (void)setClearingBehavior:(int)arg1;
- (void)setClearsOnBeginEditing:(BOOL)arg1;
- (void)setClearsOnInsertion:(BOOL)arg1;
- (void)setClearsPlaceholderOnBeginEditing:(BOOL)arg1;
- (void)setContentVerticalAlignment:(int)arg1;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
- (void)setDefaultTextAttributes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledBackground:(id)arg1;
- (void)setDrawsAsAtom:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFont:(id)arg1 fullFontSize:(float)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIcon:(id)arg1;
- (void)setInactiveHasDimAppearance:(BOOL)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setKeyboardAppearance:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelOffset:(float)arg1;
- (void)setLeftView:(id)arg1;
- (void)setLeftViewMode:(int)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setMinimumFontSize:(float)arg1;
- (void)setPaddingBottom:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingTop:(float)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)setPlaceholder:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setRightView:(id)arg1;
- (void)setRightViewMode:(int)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setShadowBlur:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextAutorresizesToFit:(BOOL)arg1;
- (void)setTextCentersHorizontally:(BOOL)arg1;
- (void)setTextCentersVertically:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)setUndoEnabled:(BOOL)arg1;
- (float)shadowBlur;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)takeTraitsFrom:(id)arg1;
- (id)text;
- (int)textAlignment;
- (id)textColor;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textInputView;
- (id)textLabel;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (void)tintColorDidChange;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (id)tokenizer;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)typingAttributes;
- (id)undoManager;
- (void)unmarkText;
- (id)viewForBaselineLayout;
- (id)webView;
- (void)willAttachFieldEditor:(id)arg1;
- (void)willDetachFieldEditor:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

- (id)ab_text;
- (id)ab_textAttributes;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (BOOL)isReallyFirstResponder;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (BOOL)MPU_automaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts;
- (id)MPU_contentSizeUpdater;
- (void)MPU_setAutomaticallyUpdatesTextStyleFontsToPreferredTextStyleFonts:(BOOL)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (void)rc_copyKeyboardSettingsFromTextField:(id)arg1;
- (void)rc_resignFirstResponderWithoutDismissingKeyboardForDuration:(double)arg1 completionBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)configureFromScriptTextField:(id)arg1;

@end
