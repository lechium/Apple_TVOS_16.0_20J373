//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANFDv2
{
}

+ (id)filterThresholds;	// IMP=0x00800000000fe0c0
+ (Class)shotflowNetworkClass;	// IMP=0x00800000000fe0af
+ (id)supportedLabelKeys;	// IMP=0x00800000000fe04c
- (id)nmsBoxes:(id)arg1;	// IMP=0x00000000000fe35e
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000fe206
- (id)initWithNetwork:(id)arg1;	// IMP=0x00000000000fe1b1
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;	// IMP=0x00000000000fe15c

@end
