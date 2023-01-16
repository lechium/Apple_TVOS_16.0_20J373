//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, NSUUID, TVHKFairPlaySAPContext;

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryRequest : NSObject
{
    unsigned int _sessionID;	// 8 = 0x8
    unsigned int _clientSharingProtocolVersion;	// 12 = 0xc
    NSUUID *_identifier;	// 16 = 0x10
    unsigned long long _accessMode;	// 24 = 0x18
    NSString *_homeSharingGroupIdentifier;	// 32 = 0x20
    NSString *_URLPath;	// 40 = 0x28
    NSString *_URLPathDescription;	// 48 = 0x30
    unsigned long long _requestType;	// 56 = 0x38
    unsigned long long _protocol;	// 64 = 0x40
    TVHKFairPlaySAPContext *_fairPlaySAPContext;	// 72 = 0x48
    NSString *_method;	// 80 = 0x50
    NSData *_body;	// 88 = 0x58
    double _timeoutInterval;	// 96 = 0x60
    NSMutableDictionary *_headers;	// 104 = 0x68
    NSMutableDictionary *_arguments;	// 112 = 0x70
}

+ (void)_addCommonHeaders:(id)arg1;	// IMP=0x001000000003bd24
+ (id)_defaultViewerOnlyAccessModeHeaders;	// IMP=0x001000000003bc5f
+ (id)_defaultFullAccessModeHeaders;	// IMP=0x001000000003bb5c
+ (id)new;	// IMP=0x001000000003a838
+ (id)_tvhk_DPAPImageRequestWithMediaEntityImageLoadParams:(id)arg1 sessionState:(id)arg2;	// IMP=0x0010000000003e66
+ (id)_tvhk_DAAPGroupsArtworkRequestActionWithMediaEntityImageLoadParams:(id)arg1 databaseID:(unsigned long long)arg2;	// IMP=0x0010000000003e1a
+ (id)_tvhk_DAAPCollectionImageRequestWithMediaEntityImageLoadParams:(id)arg1 sessionState:(id)arg2;	// IMP=0x0010000000003bc4
+ (id)_tvhk_DAAPItemImageRequestWithMediaEntityImageLoadParams:(id)arg1 sessionState:(id)arg2;	// IMP=0x0010000000003a9b
+ (id)_tvhk_DAAPImageRequestWithMediaEntityImageLoadParams:(id)arg1 sessionState:(id)arg2;	// IMP=0x00100000000039c4
+ (struct CGSize)_tvhk_imageRequestScaleToSizeWithScaleToSize:(struct CGSize)arg1;	// IMP=0x0010000000003984
+ (_Bool)_tvhk_imageRequestCropToFitWithMediaEntityImageLoadParams:(id)arg1 cropToFit:(_Bool)arg2;	// IMP=0x0010000000003960
+ (void)_tvhk_setScalingArgumentsForRequest:(id)arg1 mediaEntityImageLoadParams:(id)arg2 scaleToSize:(struct CGSize)arg3 cropToFit:(_Bool)arg4;	// IMP=0x0010000000003788
+ (id)tvhk_imageRequestWithMediaEntityImageLoadParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 sessionState:(id)arg4;	// IMP=0x00100000000036b2
+ (id)tvhk_imageRequestWithMediaEntity:(id)arg1 imageType:(unsigned long long)arg2 scaleToSize:(struct CGSize)arg3 cropToFit:(_Bool)arg4 sessionState:(id)arg5;	// IMP=0x00100000000035fc
- (void).cxx_destruct;	// IMP=0x000000000003c311
@property(retain, nonatomic) NSMutableDictionary *arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) TVHKFairPlaySAPContext *fairPlaySAPContext; // @synthesize fairPlaySAPContext=_fairPlaySAPContext;
@property(nonatomic) unsigned int clientSharingProtocolVersion; // @synthesize clientSharingProtocolVersion=_clientSharingProtocolVersion;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long protocol; // @synthesize protocol=_protocol;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *URLPathDescription; // @synthesize URLPathDescription=_URLPathDescription;
@property(copy, nonatomic) NSString *URLPath; // @synthesize URLPath=_URLPath;
@property(readonly, copy, nonatomic) NSString *homeSharingGroupIdentifier; // @synthesize homeSharingGroupIdentifier=_homeSharingGroupIdentifier;
@property(readonly, nonatomic) unsigned long long accessMode; // @synthesize accessMode=_accessMode;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)_unsignedURLPathString;	// IMP=0x000000000003bf83
- (void)_addProtcolHeaders:(id)arg1;	// IMP=0x000000000003be72
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *publiclyLoggableDescription;
@property(readonly, copy, nonatomic) NSString *publiclyLoggableSuccinctDescription;
- (id)URLWithBaseURL:(id)arg1;	// IMP=0x000000000003b1b0
- (id)URLRequestWithBaseURL:(id)arg1;	// IMP=0x000000000003ae8c
- (id)argumentValueForName:(id)arg1;	// IMP=0x000000000003ae09
- (void)setValue:(id)arg1 forArgument:(id)arg2;	// IMP=0x000000000003ad67
- (id)headerValueForField:(id)arg1;	// IMP=0x000000000003ace4
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;	// IMP=0x000000000003ac42
- (id)initWithSessionState:(id)arg1 URLPath:(id)arg2 requestType:(unsigned long long)arg3 protocol:(unsigned long long)arg4;	// IMP=0x000000000003aa3f
- (id)initWithURLPath:(id)arg1 requestType:(unsigned long long)arg2 protocol:(unsigned long long)arg3 accessMode:(unsigned long long)arg4 homeSharingGroupIdentifier:(id)arg5;	// IMP=0x000000000003a8d6
- (id)init;	// IMP=0x000000000003a867
@property(readonly, nonatomic) _Bool tvhk_returnedImageWillBeCroppedToFit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

