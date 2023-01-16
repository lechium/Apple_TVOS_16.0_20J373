//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSData, NSString;

@interface CKDTokenRegistrationURLRequest : CKDURLRequest
{
    _Bool _skipBundleIDCheck;	// 8 = 0x8
    NSData *_apsToken;	// 16 = 0x10
    NSString *_apsEnvironmentString;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001d2aa7
@property(nonatomic) _Bool skipBundleIDCheck; // @synthesize skipBundleIDCheck=_skipBundleIDCheck;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
@property(retain, nonatomic) NSData *apsToken; // @synthesize apsToken=_apsToken;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001d2a10
- (id)sourceApplicationSecondaryIdentifier;	// IMP=0x00000000001d2a08
- (id)applicationBundleIdentifierForNetworkAttribution;	// IMP=0x00000000001d29fb
- (id)applicationBundleIdentifierForContainerAccess;	// IMP=0x00000000001d29ee
- (id)generateRequestOperations;	// IMP=0x00000000001d24e7
- (id)requestOperationClasses;	// IMP=0x00000000001d247b
- (_Bool)requiresTokenRegistration;	// IMP=0x00000000001d2473
- (id)initWithOperation:(id)arg1 apsToken:(id)arg2 apsEnvironmentString:(id)arg3 bundleID:(id)arg4 skipBundleIDCheck:(_Bool)arg5;	// IMP=0x00000000001d238c

@end
