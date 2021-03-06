/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSQuickWebsiteSearchProvider : NSObject {
    NSDate *_dateAdded;
    NSDate *_dateOfLastSearch;
    NSString *_displayName;
    NSString *_hostname;
    NSString *_openSearchDescriptionURLString;
    NSString *_searchURLTemplateStringFromForm;
    NSString *_sourcePageURLString;
}

@property (nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, copy) NSDate *dateOfLastSearch;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) WBSOpenSearchDescription *openSearchDescription;
@property (nonatomic, copy) NSString *openSearchDescriptionURLString;
@property (nonatomic, readonly) NSString *searchURLTemplateString;
@property (nonatomic, copy) NSString *searchURLTemplateStringFromForm;
@property (nonatomic, readonly) NSString *sourcePageURLString;
@property (nonatomic, readonly) NSString *urlTemplateStringForSuggestionsInJSON;

- (void).cxx_destruct;
- (id)dateAdded;
- (id)dateOfLastSearch;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)hostname;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2;
- (id)initWithSourcePageURLString:(id)arg1 searchURLTemplateStringFromForm:(id)arg2;
- (id)openSearchDescription;
- (id)openSearchDescriptionURLString;
- (id)searchURLStringForQueryString:(id)arg1;
- (id)searchURLTemplateString;
- (id)searchURLTemplateStringFromForm;
- (void)setDateOfLastSearch:(id)arg1;
- (void)setOpenSearchDescriptionURLString:(id)arg1;
- (void)setSearchURLTemplateStringFromForm:(id)arg1;
- (id)sourcePageURLString;
- (id)urlTemplateStringForSuggestionsInJSON;

@end
