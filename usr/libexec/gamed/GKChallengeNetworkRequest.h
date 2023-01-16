//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, NSMutableSet, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKChallengeNetworkRequest : NSObject
{
    MISSING_TYPE *currentlyRunning;	// 8 = 0x8
    _Bool issueRequests;	// 9 = 0x9
    NSURLSessionTask *nsurlTask;	// 16 = 0x10
    NSMutableURLRequest *nsurlRequest;	// 24 = 0x18
    NSString *playerID;	// 32 = 0x20
    NSMutableSet *challenges;	// 40 = 0x28
    NSString *bundleID;	// 48 = 0x30
    NSString *uuid;	// 56 = 0x38
    NSMutableDictionary *requestData;	// 64 = 0x40
}

+ (id)bagKey;	// IMP=0x0020000000248de6
- (void).cxx_destruct;	// IMP=0x002000000024960d
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSMutableSet *challenges; // @synthesize challenges;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(readonly, copy) NSString *description;
- (id)requestIdentifier;	// IMP=0x0010000000249478
- (void)updateWithTaskInfo:(id)arg1;	// IMP=0x0010000000249304
- (id)taskInfo;	// IMP=0x0010000000249189
- (id)postBody;	// IMP=0x00100000002490fb
- (id)initWithTask:(id)arg1;	// IMP=0x001000000024904f
- (void)mergeRequestData:(id)arg1;	// IMP=0x0010000000248fc3
- (_Bool)isDuplicateRequest:(id)arg1;	// IMP=0x0010000000248f32
- (id)initWithChallenges:(id)arg1 bundleID:(id)arg2;	// IMP=0x0010000000248e06
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x0010000000248df3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

