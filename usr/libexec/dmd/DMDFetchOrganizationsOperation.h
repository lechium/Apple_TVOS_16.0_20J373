//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDFetchOrganizationsOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x004000000004d629
+ (id)requiredEntitlements;	// IMP=0x001000000004d4ed
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000004d4bb
- (void)runWithRequest:(id)arg1;	// IMP=0x004000000004d505
- (unsigned long long)queueGroup;	// IMP=0x001000000004d4fa

@end

