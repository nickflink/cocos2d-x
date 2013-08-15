local size = cc.Director:getInstance():getWinSize()
local layer = nil
local kTagSprite = 1

local function initWithLayer()
    local sprite = cc.Sprite:create(s_pPathGrossini)

    local bgLayer = cc.LayerColor:create(cc.c4b(255,255,0,255))
    layer:addChild(bgLayer, -1)

    layer:addChild(sprite, 0, kTagSprite)
    sprite:setPosition(cc.p(20,150))

    sprite:runAction(cc.JumpTo:create(4, cc.p(300,48), 100, 4))

    bgLayer:runAction(cc.RepeatForever:create(cc.Sequence:create(
                                                 cc.FadeIn:create(1),
                                                 cc.FadeOut:create(1))))

    local function onTouchEnded(x, y)
        local s = layer:getChildByTag(kTagSprite)
        s:stopAllActions()
        s:runAction(cc.MoveTo:create(1, cc.p(x, y)))
        local pos = s:getPosition()
        local posX, posY = pos.x,pos.y
        local o = x - posX
        local a = y - posY
        local at = math.atan(o / a) / math.pi * 180.0

        if a < 0 then
            if o < 0 then
                at = 180 + math.abs(at)
            else
                at = 180 - math.abs(at)
            end
        end
        s:runAction(cc.RotateTo:create(1, at))
    end

    local function onTouch(eventType, x, y)
        if eventType == "began" then
            return true
        elseif eventType == "ended" then
            return onTouchEnded(x, y)
        end
    end

    layer:setTouchEnabled(true)
    layer:registerScriptTouchHandler(onTouch)

    return layer
end

--------------------------------
-- Click And Move Test
--------------------------------
function ClickAndMoveTest()
    cclog("ClickAndMoveTest")
    local scene = cc.Scene:create()
    layer = cc.Layer:create()

    initWithLayer()

    scene:addChild(CreateBackMenuItem())
    scene:addChild(layer)

    return scene
end
