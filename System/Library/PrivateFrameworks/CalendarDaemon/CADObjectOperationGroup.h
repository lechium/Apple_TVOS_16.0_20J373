//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADObjectOperationGroup : CADOperationGroup
{
}

+ (_Bool)requiresEventAccess;	// IMP=0x00100000000083a9
- (void)CADObjectIsManaged:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000af88
- (void)CADObject:(id)arg1 getRelatedObjectsWithRelationName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ab26
- (void)CADObject:(id)arg1 getRelatedObjectWithRelationName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a6db
- (void)CADObject:(id)arg1 getSecurityScopedURLWrapperPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a2f0
- (void)CADObject:(id)arg1 getDataPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009f57
- (void)CADObject:(id)arg1 getDatePropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009bbe
- (void)CADObject:(id)arg1 getNumberPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009825
- (void)CADObject:(id)arg1 getStringPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000948c
- (void)CADObject:(id)arg1 getPropertyWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000090f3
- (void)CADObjects:(id)arg1 getPropertiesWithNames:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008d01
- (void)CADObject:(id)arg1 getPropertiesWithNames:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000088f8
- (void)CADObjectsExist:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008573
- (void)CADObjectExists:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000083b1

@end

