//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MIAppReferenceTracker : NSObject
{
    unsigned long long _domain;	// 8 = 0x8
}

+ (id)managerForInstallationDomain:(unsigned long long)arg1;	// IMP=0x004000000003936a
@property(readonly, nonatomic) unsigned long long domain; // @synthesize domain=_domain;
- (void)enumerateAppReferencesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003977a
- (_Bool)revokeTemporaryReference:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000039710
- (_Bool)finalizeTemporaryReference:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000396a6
- (id)addTemporaryReferenceForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003963c
- (_Bool)removeReferenceForIdentity:(id)arg1 waitingForSpaceReclaimation:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000395d2
- (_Bool)addReferenceForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000039568
- (_Bool)referenceExists:(_Bool *)arg1 forIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000394fe
- (id)initForInstallationDomain:(unsigned long long)arg1;	// IMP=0x00100000000394c1

@end

