//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL;

@interface RMConfigurationSubscriberServicePlugin : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSSet *_configurationTypes;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
}

+ (_Bool)_validPluginWithURL:(id)arg1;	// IMP=0x0020000000028fae
+ (id)loadPlugins;	// IMP=0x0010000000028bdd
- (void).cxx_destruct;	// IMP=0x002000000002984e
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSSet *configurationTypes; // @synthesize configurationTypes=_configurationTypes;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_serviceConnection;	// IMP=0x001000000002977e
- (void)applyChangedConfigurationsTypes:(id)arg1;	// IMP=0x0010000000029582
- (id)initWithURL:(id)arg1 identifier:(id)arg2 configurationTypes:(id)arg3;	// IMP=0x0010000000029396
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000029064

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
