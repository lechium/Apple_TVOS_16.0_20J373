//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSJSRequest : IKJSObject
{
    NSString *_requestType;	// 8 = 0x8
    NSString *_requestBody;	// 16 = 0x10
    NSString *_currentAuthentication;	// 24 = 0x18
    NSString *_appleVerificationToken;	// 32 = 0x20
    NSString *_requestorVerificationToken;	// 40 = 0x28
    NSArray *_attributeNames;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000059eed
@property(copy, nonatomic) NSArray *attributeNames; // @synthesize attributeNames=_attributeNames;
@property(copy, nonatomic) NSString *requestorVerificationToken; // @synthesize requestorVerificationToken=_requestorVerificationToken;
@property(copy, nonatomic) NSString *appleVerificationToken; // @synthesize appleVerificationToken=_appleVerificationToken;
@property(copy, nonatomic) NSString *currentAuthentication; // @synthesize currentAuthentication=_currentAuthentication;
@property(copy, nonatomic) NSString *requestBody; // @synthesize requestBody=_requestBody;
@property(copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000059d06

@end

