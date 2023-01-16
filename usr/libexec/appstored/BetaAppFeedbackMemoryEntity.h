//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDBetaAppFeedback, ASDBetaAppVersion, NSArray, NSDate, NSNumber, NSString;

@interface BetaAppFeedbackMemoryEntity
{
    ASDBetaAppVersion *_appVersion;	// 8 = 0x8
    ASDBetaAppFeedback *_feedback;	// 16 = 0x10
}

+ (id)defaultProperties;	// IMP=0x004000000003a9d2
+ (Class)databaseEntityClass;	// IMP=0x001000000003a9c1
- (void).cxx_destruct;	// IMP=0x002000000003b5ea
@property(retain, nonatomic) ASDBetaAppFeedback *feedback; // @synthesize feedback=_feedback;
@property(readonly, nonatomic) ASDBetaAppVersion *appVersion; // @synthesize appVersion=_appVersion;
- (void)_removePendingImageUploadForURLString:(id)arg1;	// IMP=0x001000000003b299
- (id)_decodedArrayForProperty:(id)arg1 ofClass:(Class)arg2;	// IMP=0x001000000003b082
- (void)addSuccessfulImageUpload:(id)arg1;	// IMP=0x001000000003af91
@property(retain, nonatomic) NSArray *successfulImageUploads;
@property(nonatomic) unsigned long long state;
@property(retain, nonatomic) NSArray *pendingImageUploads;
@property(retain, nonatomic) NSDate *nextRetryDate;
@property int attemptCount;
@property(readonly, nonatomic) NSNumber *itemID;
@property(readonly, nonatomic) NSString *logKey;
@property(readonly) _Bool isAppClip;
@property(readonly, nonatomic) NSString *betaBuildGroupID;
@property(readonly, nonatomic) NSNumber *accountDSID;

@end

