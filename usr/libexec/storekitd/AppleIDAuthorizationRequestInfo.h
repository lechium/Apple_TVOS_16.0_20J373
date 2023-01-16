//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AppleIDAuthorizationRequestInfo : NSObject
{
    NSString *_clientID;	// 8 = 0x8
    NSString *_teamID;	// 16 = 0x10
    NSString *_serviceID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000003c81
@property(readonly, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (id)initWithClientID:(id)arg1 teamID:(id)arg2 serviceID:(id)arg3;	// IMP=0x0010000000003ad6

@end

