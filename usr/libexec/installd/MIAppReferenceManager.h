//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MIAppReferenceManager : NSObject
{
}

+ (id)defaultManager;	// IMP=0x004000000003a10c
- (_Bool)countReferencesForIdentity:(id)arg1 forUserWithID:(unsigned int)arg2 count:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x004000000003bf91
- (void)enumerateAppReferencesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003bf58
- (_Bool)removeReferenceForUserWithID:(unsigned int)arg1 personaUniqueString:(id)arg2 inBundleContainer:(id)arg3 wasLastReference:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x001000000003beac
- (_Bool)removeTemporaryReferenceForUserWithID:(unsigned int)arg1 personaUniqueString:(id)arg2 inBundleContainer:(id)arg3 wasLastReference:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x001000000003be00
- (_Bool)_removeReferenceAtURL:(id)arg1 personaUniqueString:(id)arg2 inBundleContainer:(id)arg3 wasLastReference:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x001000000003bbe8
- (_Bool)addReferenceForUserWithID:(unsigned int)arg1 personaUniqueString:(id)arg2 byRemovingTemporaryReference:(_Bool)arg3 inBundleContainer:(id)arg4 error:(id *)arg5;	// IMP=0x001000000003bb14
- (_Bool)addTemporaryReferenceForUserWithID:(unsigned int)arg1 personaUniqueString:(id)arg2 inBundleContainer:(id)arg3 error:(id *)arg4;	// IMP=0x001000000003ba87
- (_Bool)_countTemporaryReferences:(unsigned long long *)arg1 inBundleContainer:(id)arg2 withError:(id *)arg3;	// IMP=0x001000000003ba18
- (_Bool)_countFinalReferences:(unsigned long long *)arg1 inBundleContainer:(id)arg2 withError:(id *)arg3;	// IMP=0x001000000003b9a9
- (_Bool)_countReferencesWithType:(int)arg1 atBaseURL:(id)arg2 count:(unsigned long long *)arg3 withError:(id *)arg4;	// IMP=0x001000000003b546
- (_Bool)_updateReferenceAtURL:(id)arg1 byRemovingPersonaUniqueString:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003b08e
- (_Bool)_updateReferenceAtURL:(id)arg1 byAddingPersonaUniqueString:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003aade
- (id)_temporaryReferenceURLForUserWithID:(unsigned int)arg1 inBundleContainer:(id)arg2;	// IMP=0x001000000003aa42
- (id)_referenceURLForUserWithID:(unsigned int)arg1 inBundleContainer:(id)arg2;	// IMP=0x001000000003a9a6
- (_Bool)revokeTemporaryReference:(id)arg1 wasLastReference:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x001000000003a7ff
- (_Bool)finalizeTemporaryReference:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003a641
- (id)addTemporaryReferenceForIdentity:(id)arg1 inDomain:(unsigned long long)arg2 forUserWithID:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x001000000003a473
- (_Bool)removeReferenceForIdentity:(id)arg1 inDomain:(unsigned long long)arg2 forUserWithID:(unsigned int)arg3 wasLastReference:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x001000000003a31d
- (_Bool)addReferenceForIdentity:(id)arg1 inDomain:(unsigned long long)arg2 forUserWithID:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x001000000003a1c8
- (id)init;	// IMP=0x001000000003a199

@end

