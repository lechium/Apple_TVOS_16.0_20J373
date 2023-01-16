//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/NSObject-Protocol.h>

@class CADGenerationStampedObjectID, EKChangeSet, EKEventStore, EKObject, EKObjectID, EKPersistentObject, NSSet, NSString;
@protocol EKFrozenMeltedPair, EKProtocolObject;

@protocol EKFrozenMeltedPair <NSObject>
+ (Class)meltedClass;
+ (Class)frozenClass;
@property(readonly, nonatomic) CADGenerationStampedObjectID *CADObjectID;
@property(readonly, nonatomic) EKObjectID *objectID;
@property(readonly, nonatomic) NSString *semanticIdentifier;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) _Bool isPartialObject;
@property(readonly, nonatomic) _Bool isFrozen;
- (void)reset;
- (_Bool)isEqual:(id <EKFrozenMeltedPair>)arg1 ignoringProperties:(NSSet *)arg2;
- (_Bool)isCompletelyEqual:(id <EKFrozenMeltedPair>)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (EKObject *)meltedObjectInStore:(EKEventStore *)arg1;
- (_Bool)isPropertyUnavailable:(NSString *)arg1;
- (EKPersistentObject *)frozenObjectInStore:(EKEventStore *)arg1;
- (EKPersistentObject *)frozenObject;
- (Class)frozenClass;
- (EKObject *)existingMeltedObject;
- (EKChangeSet *)changeSet;
- (id)initWithObject:(id <EKProtocolObject>)arg1;
@end

