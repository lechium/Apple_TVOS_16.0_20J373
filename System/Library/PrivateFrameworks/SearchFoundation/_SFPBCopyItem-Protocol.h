//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, _SFPBContactCopyItem, _SFPBCoreSpotlightCopyItem, _SFPBImageCopyItem, _SFPBTextCopyItem;

@protocol _SFPBCopyItem <NSObject>
@property(readonly, nonatomic) unsigned long long whichValue;
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBContactCopyItem *contactCopyItem;
@property(retain, nonatomic) _SFPBImageCopyItem *imageCopyItem;
@property(retain, nonatomic) _SFPBCoreSpotlightCopyItem *spotlightCopyItem;
@property(retain, nonatomic) _SFPBTextCopyItem *textCopyItem;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
