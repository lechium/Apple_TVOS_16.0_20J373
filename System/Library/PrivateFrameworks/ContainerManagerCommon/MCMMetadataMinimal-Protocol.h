//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContainerManagerCommon/NSCopying-Protocol.h>
#import <ContainerManagerCommon/NSObject-Protocol.h>

@class MCMConcreteContainerIdentityForLibsystem, MCMContainerPath, MCMUserIdentity, NSNumber, NSString, NSUUID;

@protocol MCMMetadataMinimal <NSObject, NSCopying>
@property(readonly, nonatomic) NSString *shortDescription;
@property(readonly, nonatomic) unsigned int platform;
@property(readonly, nonatomic) _Bool existed;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity;
@property(readonly, nonatomic) _Bool transient;
@property(readonly, nonatomic) NSUUID *uuid;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) unsigned long long containerClass;
@property(readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentity;
@property(readonly, nonatomic) NSNumber *schemaVersion;
@property(readonly, nonatomic) MCMContainerPath *containerPath;
- (struct container_object_s *)createLibsystemContainerWithError:(id *)arg1;
- (id)metadataByChangingSchemaVersion:(NSNumber *)arg1;
- (id)metadataByChangingUUID:(NSUUID *)arg1;
- (id)metadataByChangingContainerPath:(MCMContainerPath *)arg1;
- (id)metadataBySettingTransient:(_Bool)arg1;
@end

