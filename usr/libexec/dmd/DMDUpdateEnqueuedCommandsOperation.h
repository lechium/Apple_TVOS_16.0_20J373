//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDUpdateEnqueuedCommandsOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000006fb18
+ (id)requiredEntitlements;	// IMP=0x001000000006f9ce
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000006f99c
- (void)runWithRequest:(id)arg1;	// IMP=0x004000000006f9e6
- (unsigned long long)queueGroup;	// IMP=0x001000000006f9db

@end

