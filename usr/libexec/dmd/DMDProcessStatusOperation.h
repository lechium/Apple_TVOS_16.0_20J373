//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDProcessStatusOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000006282d
+ (id)requiredEntitlements;	// IMP=0x00100000000626bb
+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000062689
- (void)runWithRequest:(id)arg1;	// IMP=0x00400000000626db
- (_Bool)runOnMainThread;	// IMP=0x00100000000626d3
- (unsigned long long)queueGroup;	// IMP=0x00100000000626c8

@end

