//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MPMediaLibraryPrivacyContext : NSObject
{
}

+ (void)setDefaultClientWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00800000001bf9e2
+ (id)contextForDefaultClient;	// IMP=0x00800000001bf9b7
+ (id)sharedContextForCurrentProcess;	// IMP=0x00800000001bf987
+ (void)initialize;	// IMP=0x00800000001bf981
- (void)endAccessInterval;	// IMP=0x00000000001bf97b
- (void)beginAccessInterval;	// IMP=0x00000000001bf975
- (void)logPrivacyAccess;	// IMP=0x00000000001bf96f
- (id)initWithPAApplication:(id)arg1;	// IMP=0x00000000001bf940
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000001bf92c
- (id)initWithClientIdentity:(id)arg1;	// IMP=0x00000000001bf918
- (id)init;	// IMP=0x00000000001bf904

@end

