//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _DDUIAccountManager : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSMutableDictionary *_iCloudToAltDSIDDictionary;	// 16 = 0x10
    NSMutableDictionary *_iCloudToNameComponentsDictionary;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000479f
@property(retain, nonatomic) NSMutableDictionary *iCloudToNameComponentsDictionary; // @synthesize iCloudToNameComponentsDictionary=_iCloudToNameComponentsDictionary;
@property(retain, nonatomic) NSMutableDictionary *iCloudToAltDSIDDictionary; // @synthesize iCloudToAltDSIDDictionary=_iCloudToAltDSIDDictionary;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_findMemberForiCloudAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000043f8
- (void)_updateMemberDataForiCloudAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003fe2
- (void)nameComponentsForiCloudAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003d37
- (void)altDsidForiCloudAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003a1c
- (id)init;	// IMP=0x000000000000397b

@end

