//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, VUIAppContext, WLKChannelDetails;

__attribute__((visibility("hidden")))
@interface VUIActionPunchout
{
    _Bool _isEntitledToPlay;	// 8 = 0x8
    _Bool _isAdultContent;	// 9 = 0x9
    _Bool _isPlaybackURL;	// 10 = 0xa
    _Bool _shouldAvoidInstallSheet;	// 11 = 0xb
    NSURL *_punchoutURL;	// 16 = 0x10
    WLKChannelDetails *_channelDetails;	// 24 = 0x18
    NSString *_mediaType;	// 32 = 0x20
    NSString *_externalID;	// 40 = 0x28
    NSString *_referenceID;	// 48 = 0x30
    NSString *_canonicalID;	// 56 = 0x38
    NSString *_contentTitle;	// 64 = 0x40
    VUIAppContext *_appContext;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001bb351
@property(nonatomic) _Bool shouldAvoidInstallSheet; // @synthesize shouldAvoidInstallSheet=_shouldAvoidInstallSheet;
@property(retain, nonatomic) VUIAppContext *appContext; // @synthesize appContext=_appContext;
@property(copy, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(nonatomic) _Bool isPlaybackURL; // @synthesize isPlaybackURL=_isPlaybackURL;
@property(retain, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(retain, nonatomic) NSString *referenceID; // @synthesize referenceID=_referenceID;
@property(retain, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) _Bool isAdultContent; // @synthesize isAdultContent=_isAdultContent;
@property(nonatomic) _Bool isEntitledToPlay; // @synthesize isEntitledToPlay=_isEntitledToPlay;
@property(retain, nonatomic) WLKChannelDetails *channelDetails; // @synthesize channelDetails=_channelDetails;
@property(retain, nonatomic) NSURL *punchoutURL; // @synthesize punchoutURL=_punchoutURL;
- (_Bool)isAccountRequired;	// IMP=0x00000000001bb1a4
- (_Bool)_isValidAppInstalled;	// IMP=0x00000000001baed2
- (void)_openPunchoutURL:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ba097
- (void)_showErrorMessageAlert:(id)arg1;	// IMP=0x00000000001b9b11
- (void)_openAirplayPicker:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b9aff
- (void)_startAppInstallFlow:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b9807
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b9393
- (_Bool)canPerformNow;	// IMP=0x00000000001b935c
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;	// IMP=0x00000000001b9037

@end

