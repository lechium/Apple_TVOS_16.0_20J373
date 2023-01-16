//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNClassificationCustomHierarchy, VNSceneObservation;

__attribute__((visibility("hidden")))
@interface VNSceneClassificationRequestConfiguration
{
    VNSceneObservation *_sceneObservation;	// 8 = 0x8
    VNClassificationCustomHierarchy *_customHierarchy;	// 16 = 0x10
    unsigned long long _maximumLeafObservations;	// 24 = 0x18
    unsigned long long _maximumHierarchicalObservations;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004d798
@property(nonatomic) unsigned long long maximumHierarchicalObservations; // @synthesize maximumHierarchicalObservations=_maximumHierarchicalObservations;
@property(nonatomic) unsigned long long maximumLeafObservations; // @synthesize maximumLeafObservations=_maximumLeafObservations;
@property(retain, nonatomic) VNClassificationCustomHierarchy *customHierarchy; // @synthesize customHierarchy=_customHierarchy;
@property(retain, nonatomic) VNSceneObservation *sceneObservation; // @synthesize sceneObservation=_sceneObservation;
- (id)description;	// IMP=0x000000000004d583
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004d4c3
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x000000000004d474

@end

