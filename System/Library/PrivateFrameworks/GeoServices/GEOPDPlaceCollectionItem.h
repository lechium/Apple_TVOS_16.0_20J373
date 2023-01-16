//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, GEOPDQuickLinkItem, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCollectionItem : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDQuickLinkItem *_appClip;	// 24 = 0x18
    NSMutableArray *_itemDescriptionBytes;	// 32 = 0x20
    NSMutableArray *_itemDescriptionHtmls;	// 40 = 0x28
    NSMutableArray *_itemDescriptions;	// 48 = 0x30
    GEOPDMapsIdentifier *_itemId;	// 56 = 0x38
    NSMutableArray *_photos;	// 64 = 0x40
    NSMutableArray *_punchOutTexts;	// 72 = 0x48
    NSString *_url;	// 80 = 0x50
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    _Bool _disableAppClipFallback;	// 100 = 0x64
    _Bool _enableImageFallback;	// 101 = 0x65
    struct {
        unsigned int has_disableAppClipFallback:1;
        unsigned int has_enableImageFallback:1;
        unsigned int read_unknownFields:1;
        unsigned int read_appClip:1;
        unsigned int read_itemDescriptionBytes:1;
        unsigned int read_itemDescriptionHtmls:1;
        unsigned int read_itemDescriptions:1;
        unsigned int read_itemId:1;
        unsigned int read_photos:1;
        unsigned int read_punchOutTexts:1;
        unsigned int read_url:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000c8aeef
- (unsigned long long)hash;	// IMP=0x0000000000c8ad4d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c8aab0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c8a2db
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c89c53
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c89c44
- (id)jsonRepresentation;	// IMP=0x0000000000c8895f
- (id)dictionaryRepresentation;	// IMP=0x0000000000c87bc6
- (id)description;	// IMP=0x0000000000c87b17
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c85c6b
- (id)init;	// IMP=0x0000000000c85c0f
- (id)punchOutText;	// IMP=0x0000000000a422bc
- (id)itemHTMLDescription;	// IMP=0x0000000000a42266
- (id)itemDescription;	// IMP=0x0000000000a42210

@end

