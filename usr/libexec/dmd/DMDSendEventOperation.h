//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDSendEventOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000066c34
+ (id)requiredEntitlements;	// IMP=0x00100000000669a6
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000066974
- (void)runWithRequest:(id)arg1;	// IMP=0x00400000000669c6
- (_Bool)runOnMainThread;	// IMP=0x00100000000669be
- (unsigned long long)queueGroup;	// IMP=0x00100000000669b3

@end
