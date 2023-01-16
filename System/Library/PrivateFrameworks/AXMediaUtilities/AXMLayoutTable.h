//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXMLayoutHeader, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXMLayoutTable
{
    AXMLayoutHeader *_header;	// 8 = 0x8
    NSMutableArray *_rows;	// 16 = 0x10
    NSMutableArray *_columns;	// 24 = 0x18
}

+ (id)region:(id)arg1 row:(id)arg2;	// IMP=0x00600000000364ab
- (void).cxx_destruct;	// IMP=0x00000000000366e0
- (id)columns;	// IMP=0x00000000000366cb
- (id)rows;	// IMP=0x00000000000366b6
- (id)firstColumn;	// IMP=0x0000000000036699
- (void)addColumn:(id)arg1;	// IMP=0x000000000003667c
- (id)header;	// IMP=0x0000000000036667
- (id)firstLine;	// IMP=0x000000000003664a
- (void)addRow:(id)arg1;	// IMP=0x000000000003662d
- (struct CGRect)normalizedFrame;	// IMP=0x00000000000365e0
- (struct CGRect)frame;	// IMP=0x0000000000036593

@end
