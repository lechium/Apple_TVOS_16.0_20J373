//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSettingsBackgroundAppRefreshSettings : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000023dca
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool allowsBackgroundAppRefresh;
- (void)setAllowsBackgroundAppRefresh:(_Bool)arg1;	// IMP=0x0010000000023b1a
- (unsigned long long)hash;	// IMP=0x0010000000023a11
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000023964
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000000238f9

@end

