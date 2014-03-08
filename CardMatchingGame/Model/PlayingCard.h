//
//  PlayingCard.h
//  CardMatchingGame
//
//  Created by 7 on 14-3-7.
//  Copyright (c) 2014年 7. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong,nonatomic)NSString *suit;
@property (nonatomic)NSUInteger rank;

+ (NSArray *)validSuits;

+ (NSUInteger)maxRank;

@end
