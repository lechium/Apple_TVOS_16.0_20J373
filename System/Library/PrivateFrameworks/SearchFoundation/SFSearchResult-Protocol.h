//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL, SFActionItem, SFCard, SFCustom, SFImage, SFMoreResults, SFPunchout, SFText, SFTopic;

@protocol SFSearchResult
@property(nonatomic) _Bool shouldAutoNavigate;
@property(nonatomic) _Bool isInstantAnswer;
@property(retain, nonatomic) NSData *entityData;
@property(nonatomic) unsigned long long blockId;
@property(nonatomic) _Bool doNotFold;
@property(copy, nonatomic) NSString *srf;
@property(copy, nonatomic) NSString *fbr;
@property(copy, nonatomic) NSString *fileProviderDomainIdentifier;
@property(copy, nonatomic) NSString *fileProviderIdentifier;
@property(nonatomic) long long dataOwnerType;
@property(copy, nonatomic) NSArray *contentTypeTree;
@property(copy, nonatomic) NSString *contentType;
@property(copy, nonatomic) NSArray *itemProviderFileTypes;
@property(copy, nonatomic) NSArray *itemProviderDataTypes;
@property(copy, nonatomic) NSString *userInput;
@property(nonatomic) _Bool publiclyIndexable;
@property(nonatomic) unsigned long long queryId;
@property(copy, nonatomic) NSArray *alternativeURLs;
@property(retain, nonatomic) SFCard *compactCard;
@property(nonatomic) _Bool usesCompactDisplay;
@property(nonatomic) _Bool didTakeoverGo;
@property(nonatomic) _Bool wasCompact;
@property(nonatomic) _Bool preferTopPlatter;
@property(nonatomic) _Bool shouldUseCompactDisplay;
@property(nonatomic) _Bool noGoTakeover;
@property(copy, nonatomic) NSString *completedQuery;
@property(copy, nonatomic) NSString *correctedQuery;
@property(copy, nonatomic) NSString *intendedQuery;
@property(copy, nonatomic) NSDictionary *serverFeatures;
@property(copy, nonatomic) NSDictionary *localFeatures;
@property(nonatomic) _Bool isStaticCorrection;
@property(retain, nonatomic) SFImage *icon;
@property(copy, nonatomic) NSString *resultBundleId;
@property(retain, nonatomic) NSNumber *titleNoteSize;
@property(copy, nonatomic) NSString *titleNote;
@property(retain, nonatomic) NSNumber *maxAge;
@property(retain, nonatomic) NSNumber *queryIndependentScore;
@property(retain, nonatomic) NSNumber *engagementScore;
@property(nonatomic) _Bool isStreaming;
@property(nonatomic) _Bool isQuickGlance;
@property(copy, nonatomic) NSString *resultTemplate;
@property(copy, nonatomic) NSString *resultType;
@property(retain, nonatomic) SFCustom *customProperties;
@property(nonatomic) double personalizationScore;
@property(nonatomic) double serverScore;
@property(copy, nonatomic) NSString *mediaType;
@property(nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(copy, nonatomic) NSString *domainName;
@property(nonatomic) int type;
@property(nonatomic) int placement;
@property(nonatomic) double rankingScore;
@property(nonatomic) _Bool renderHorizontallyWithOtherResultsInCategory;
@property(copy, nonatomic) NSURL *sectionHeaderMoreURL;
@property(copy, nonatomic) NSString *sectionHeaderMore;
@property(copy, nonatomic) NSString *sectionHeader;
@property(nonatomic) int topHit;
@property(copy, nonatomic) NSString *userActivityRequiredString;
@property(nonatomic) _Bool isLocalApplicationResult;
@property(copy, nonatomic) NSString *sectionBundleIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(retain, nonatomic) SFTopic *requestedTopic;
@property(retain, nonatomic) SFTopic *normalizedTopic;
@property(retain, nonatomic) SFPunchout *moreResultsPunchout;
@property(retain, nonatomic) SFMoreResults *moreResults;
@property(retain, nonatomic) SFCard *inlineCard;
@property(retain, nonatomic) SFCard *card;
@property(copy, nonatomic) NSString *appleReferrer;
@property(copy, nonatomic) NSString *nearbyBusinessesString;
@property(retain, nonatomic) SFImage *mapsMoreIcon;
@property(copy, nonatomic) NSString *mapsMoreString;
@property(retain, nonatomic) NSURL *mapsMoreURL;
@property(copy, nonatomic) NSString *mapsResultType;
@property(retain, nonatomic) NSData *mapsData;
@property(copy, nonatomic) NSString *entityIdentifier;
@property(copy, nonatomic) NSString *calendarIdentifier;
@property(copy, nonatomic) NSString *contactIdentifier;
@property(copy, nonatomic) NSString *storeIdentifier;
@property(retain, nonatomic) SFPunchout *punchout;
@property(retain, nonatomic) SFActionItem *action;
@property(nonatomic) int auxiliaryBottomTextColor;
@property(copy, nonatomic) NSString *auxiliaryBottomText;
@property(copy, nonatomic) NSString *auxiliaryMiddleText;
@property(copy, nonatomic) NSString *auxiliaryTopText;
@property(retain, nonatomic) NSURL *url;
@property(retain, nonatomic) SFImage *completionImage;
@property(copy, nonatomic) NSString *completion;
@property(copy, nonatomic) NSString *sourceName;
@property(copy, nonatomic) NSString *publishDate;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSArray *descriptions;
@property(nonatomic) _Bool isCentered;
@property(nonatomic) _Bool isSecondaryTitleDetached;
@property(retain, nonatomic) SFImage *secondaryTitleImage;
@property(copy, nonatomic) NSString *secondaryTitle;
@property(retain, nonatomic) SFText *title;
@property(nonatomic) _Bool preventThumbnailImageScaling;
@property(retain, nonatomic) SFImage *thumbnail;
@property(copy, nonatomic) NSString *identifier;
@end

